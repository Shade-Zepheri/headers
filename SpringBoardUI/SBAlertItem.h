#import "_SBAlertController.h"

@interface SBAlertItem : NSObject

+ (void)activateAlertItem:(SBAlertItem *)alertItem;

- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)requirePasscode;
- (void)dismiss;

- (void)deactivateForButton;

- (_SBAlertController *)alertController;

@end
