@interface AWEDuetEntranceHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldHideDuetItemInSharePanelWithContext:;
+ (BOOL)shouldGrayedDuetItemInSharePanelWithContext:;
+ (BOOL)isDuetAllowedWithContext:;
+ (BOOL)checkDuetPermissionAfterClickedWithContext:;
+ (BOOL)duetSecurityCheckWithContext:;
@end
