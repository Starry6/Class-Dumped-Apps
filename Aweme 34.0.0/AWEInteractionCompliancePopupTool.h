@interface AWEInteractionCompliancePopupTool : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enablePopupDialog;
+ (void)showDialogWithConfig:source:;
+ (id)convertSourceIntToString:;
+ (void)showDialogWithConfig:event:source:;
@end
