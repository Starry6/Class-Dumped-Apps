@interface IESECSliceXContainerInfo : NSObject
@property (nonatomic) NSString uniqueID;
@property (nonatomic) IESECSliceXResourceMetaData metaData;
@property (nonatomic) IESECSliceXInstance sliceXInstance;
@property (nonatomic) IESECSliceXResourceLoadInfo loadInfo;
- (id)loadInfo;
- (void)setLoadInfo:;
- (void)setSliceXInstance:;
- (id)sliceXInstance;
- (void)setMetaData:;
- (id)uniqueID;
- (void)setUniqueID:;
- (id)metaData;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
