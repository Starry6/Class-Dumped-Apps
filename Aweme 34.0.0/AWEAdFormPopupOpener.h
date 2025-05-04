@interface AWEAdFormPopupOpener : NSObject
@property (nonatomic) BOOL popupShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rifleView:closeWithParams:;
- (BOOL)popupShowing;
- (void)openAdFormPopupWithAweme:tag:;
- (void)setPopupShowing:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (BOOL)popupShowing;
+ (void)openAdFormPopupWithAweme:tag:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
