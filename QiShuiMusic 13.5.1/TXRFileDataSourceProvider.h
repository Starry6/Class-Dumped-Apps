@interface TXRFileDataSourceProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (unsigned long long)_determineFileType:;
- (id)provideImageInfoAtLevel:element:face:;
- (id)provideTextureInfo;
- (id)initWithData:bufferAllocator:options:error:;
- (id)initWithURL:bufferAllocator:options:error:;
- (void)_parseData:bufferAllocator:options:error:;
@end
