@interface AWEECShopServiceShareChanel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)shareImage;
- (void)shareItem:willAppear:;
- (long long)shareCategory;
- (id)getChannelModel;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
@end
