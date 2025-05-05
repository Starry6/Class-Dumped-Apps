@interface TTVideoEngineLivePlayerInfo : NSObject
@property (nonatomic) Q engineHash;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString subtag;
@property (nonatomic) NSString viewTreeInfo;
@property (nonatomic) NSDictionary extra;
- (unsigned long long)engineHash;
- (void)setEngineHash:;
- (void)setExtra:;
- (void)setSubtag:;
- (void)setViewTreeInfo:;
- (id)subtag;
- (id)viewTreeInfo;
- (id)tag;
- (id)extra;
- (void)setTag:;
- (void).cxx_destruct;
@end
