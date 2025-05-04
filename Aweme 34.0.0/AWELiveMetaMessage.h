@interface AWELiveMetaMessage : AWELivePreMessage
@property (nonatomic) q type;
@property (nonatomic) AWELiveMetaHost host;
@property (nonatomic) NSString content;
- (void)setHost:;
- (id)host;
- (id)content;
- (long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
@end
