@interface KVProfile : NSObject
- (id)profileInfo;
- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateDatasetsWithError:usingBlock:;
- (BOOL)donateWithServiceProvider:error:;
- (id)_donatorForDataset:serviceProvider:error:;
- (id)initWithProfileData:error:;
- (id)initWithProfileData:provider:error:;
+ (id)profileWithContentsOfURL:error:;
+ (void)initalize;
@end
