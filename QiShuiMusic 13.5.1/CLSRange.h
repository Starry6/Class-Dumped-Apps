@interface CLSRange : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) double delta;
@property (nonatomic) NSString parentObjectID;
- (void)setEnd:;
- (double)delta;
- (void)setStart:;
- (double)end;
- (double)start;
- (id)initWithCoder:;
- (id)initWithRange:;
- (id)initWithStart:end:;
- (void)encodeWithCoder:;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (BOOL)validateObject:;
- (BOOL)overlapsWith:;
- (void)mergeWithRange:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)compressOverlappingRanges:;
@end
