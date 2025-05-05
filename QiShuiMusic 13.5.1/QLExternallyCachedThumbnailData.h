@interface QLExternallyCachedThumbnailData : NSObject
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSData versionIdentifier;
@property (nonatomic) NSString fileExtension;
@property (nonatomic) Q size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemIdentifier;
- (id)versionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)size;
- (id)fileExtension;
- (id)initFromPQLResultSet:error:;
@end
