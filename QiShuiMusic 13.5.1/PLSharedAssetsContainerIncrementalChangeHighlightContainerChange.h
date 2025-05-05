@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject
@property (nonatomic) NSString relationshipKey;
@property (nonatomic) NSURL sourceHighlightURI;
@property (nonatomic) NSURL destinationHighlightURI;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)relationshipKey;
- (void)setRelationshipKey:;
- (id)sourceHighlightURI;
- (void)setSourceHighlightURI:;
- (id)destinationHighlightURI;
- (void)setDestinationHighlightURI:;
+ (BOOL)supportsSecureCoding;
@end
