@interface PSIObject : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSArray tokens;
- (id)initWithUUID:;
- (void)setUUID:;
- (id)uuid;
- (void)reverse;
- (void)clear;
- (void).cxx_destruct;
- (id)description;
- (id)tokens;
- (id)copyWithZone:;
- (id)_initForCopy:;
- (id)initForReverse;
- (void)addContentString:category:owningCategory:;
- (void)addIdentifier:category:owningCategory:;
- (void)addContentString:identifier:category:owningCategory:;
- (void)addSynonym:category:originalContentString:;
- (void)addSynonym:identifier:category:originalContentString:;
- (void)enumerateSynonymsForOriginalContentString:handler:;
@end
