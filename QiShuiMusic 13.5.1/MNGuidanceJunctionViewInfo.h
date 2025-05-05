@interface MNGuidanceJunctionViewInfo : NSObject
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) NSArray images;
- (id)uniqueID;
- (id)initWithCoder:;
- (id)images;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithID:images:;
+ (BOOL)supportsSecureCoding;
@end
