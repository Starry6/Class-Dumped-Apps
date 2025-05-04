@interface AWESearchEntryElementHelper : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} viewFrame;
@property (nonatomic) BOOL isSearchIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)viewFrame;
- (void)setViewFrame:;
- (void)setIsSearchIcon:;
- (void)clearLayout;
- (id)getConvertedLayoutInView:;
- (void)saveCurSearchEntryLayout:;
- (BOOL)isSearchIcon;
+ (id)shareInstance;
@end
