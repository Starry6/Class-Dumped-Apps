@interface CKAtomReference : NSObject
@property (nonatomic) C type;
@property (nonatomic) CKMergeableValueID mergeableValueID;
@property (nonatomic) CKDistributedTimestamp timestamp;
@property (nonatomic) CKMergeableValueID location;
- (void)setType:;
- (unsigned long long)hash;
- (id)location;
- (void)setTimestamp:;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)timestamp;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)mergeableValueID;
- (void)setMergeableValueID:;
- (id)initWithMergeableValueID:;
- (id)initWithMergeableValueID:timestamp:;
- (id)initWithMergeableValueID:timestamp:type:;
- (BOOL)isEqualToReference:;
@end
