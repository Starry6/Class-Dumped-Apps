@interface GEOResourceInfo : NSObject
@property (nonatomic) NSArray equivalentResources;
@property (nonatomic) GEOResource resource;
@property (nonatomic) NSInteger validationMethod;
@property (nonatomic) NSString eTag;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSData checksum;
- (id)eTag;
- (void)setETag:;
- (BOOL)shouldCheckForUpdateForResourceAtPath:useExtendedAttrs:forceUpdateCheck:log:;
- (int)validationMethod;
- (void)setEquivalentResources:;
- (int)type;
- (void).cxx_destruct;
- (id)initWithResource:;
- (id)equivalentResources;
- (id)resource;
- (BOOL)validateResource:log:;
- (id)description;
- (id)name;
- (BOOL)validateResourceAtPath:useExtendedAttrs:log:;
- (id)checksum;
@end
