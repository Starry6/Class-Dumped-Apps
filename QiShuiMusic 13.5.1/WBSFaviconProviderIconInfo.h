@interface WBSFaviconProviderIconInfo : NSObject
@property (nonatomic) NSString pageURLString;
@property (nonatomic) NSString iconURLString;
@property (nonatomic) NSString UUIDString;
@property (nonatomic) NSDate dateAdded;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL hasGeneratedResolutions;
@property (nonatomic) BOOL isRejectedResource;
- (id)init;
- (id)dateAdded;
- (void).cxx_destruct;
- (id)UUIDString;
- (id)size;
- (id)iconURLString;
- (id)initWithPageURLString:iconURLString:UUIDString:dateAdded:size:hasGeneratedResolutions:isRejectedResource:;
- (id)pageURLString;
- (BOOL)hasGeneratedResolutions;
- (BOOL)isRejectedResource;
@end
