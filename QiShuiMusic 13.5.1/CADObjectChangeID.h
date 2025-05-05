@interface CADObjectChangeID : NSObject
@property (nonatomic) NSInteger entityType;
@property (nonatomic) q changeID;
- (id)initWithCoder:;
- (long long)changeID;
- (void)encodeWithCoder:;
- (int)entityType;
- (id)initWithEntityType:changeID:;
+ (BOOL)supportsSecureCoding;
@end
