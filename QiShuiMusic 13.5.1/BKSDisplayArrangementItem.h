@interface BKSDisplayArrangementItem : NSObject
@property (nonatomic) NSString displayUUID;
@property (nonatomic) NSString relativeDisplayUUID;
@property (nonatomic) I edge;
@property (nonatomic) double offset;
- (id)displayUUID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)offset;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (unsigned int)edge;
- (BOOL)isEqual:;
- (id)initWithDisplayUUID:relativeToDisplayUUID:alongEdge:atOffset:;
- (id)relativeDisplayUUID;
+ (BOOL)supportsSecureCoding;
@end
