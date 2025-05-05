@interface CROutputRegionTranscriptComponent : NSObject
@property (nonatomic) CROutputRegion outputRegion;
@property (nonatomic) {_NSRange=QQ} representedRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)representedRange;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:;
- (id)initWithOutputRegion:range:;
- (id)outputRegion;
- (void)setOutputRegion:;
- (void)setRepresentedRange:;
+ (id)componentWithOutputRegion:range:;
@end
