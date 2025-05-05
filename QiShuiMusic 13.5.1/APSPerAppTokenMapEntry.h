@interface APSPerAppTokenMapEntry : NSObject
@property (nonatomic) NSData perAppToken;
@property (nonatomic) <APSTokenInfo> info;
@property (nonatomic) BOOL flag;
- (BOOL)flag;
- (void)setInfo:;
- (id)perAppToken;
- (void).cxx_destruct;
- (void)setPerAppToken:;
- (id)description;
- (id)info;
- (void)setFlag:;
@end
