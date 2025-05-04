@interface AWENovelWebUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableFalcon;
- (void)fireEvent:data:;
- (void)fireEvent:data:engine:;
- (id)createWebViewWithFrame:;
- (id)webViewConfig;
@end
