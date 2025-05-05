@interface PLURIArrayWithHashes : NSObject
@property (nonatomic) ^{__CFArray=} uris;
@property (nonatomic) ^{__CFArray=} hashes;
@property (nonatomic) NSMutableArray attributeValues;
@property (nonatomic) NSMutableArray relationshipValues;
@property (nonatomic) Q count;
@property (nonatomic) BOOL isUpdate;
- (id)init;
- (id)hashes;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (BOOL)isUpdate;
- (id)attributeValues;
- (id)initForUpdates:;
- (id)uris;
- (void)setUris:;
- (void)setHashes:;
- (void)setAttributeValues:;
- (id)relationshipValues;
- (void)setRelationshipValues:;
@end
