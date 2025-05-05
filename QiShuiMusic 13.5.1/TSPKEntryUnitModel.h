@interface TSPKEntryUnitModel : NSObject
@property (nonatomic) NSString entryIdentifier;
@property (nonatomic) @? initAction;
@property (nonatomic) Q storeType;
@property (nonatomic) NSString pipelineType;
@property (nonatomic) NSString dataType;
@property (nonatomic) NSString clazzName;
@property (nonatomic) NSArray apis;
@property (nonatomic) NSArray c_apis;
- (id)apis;
- (id)c_apis;
- (id)clazzName;
- (id)initAction;
- (void)setApis:;
- (void)setC_apis:;
- (void)setClazzName:;
- (void)setEntryIdentifier:;
- (void)setInitAction:;
- (void)setPipelineType:;
- (unsigned long long)storeType;
- (void)setStoreType:;
- (void)setDataType:;
- (id)dataType;
- (void).cxx_destruct;
- (id)pipelineType;
- (id)entryIdentifier;
@end
