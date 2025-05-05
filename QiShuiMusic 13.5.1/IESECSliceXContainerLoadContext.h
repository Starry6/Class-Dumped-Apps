@interface IESECSliceXContainerLoadContext : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) IESECSliceXResourceMetaData metaData;
@property (nonatomic) @? complete;
- (id)initWithURL:metaData:complete:;
- (id)complete;
- (id)url;
- (void)setMetaData:;
- (void)setUrl:;
- (id)metaData;
- (void).cxx_destruct;
- (void)setComplete:;
@end
