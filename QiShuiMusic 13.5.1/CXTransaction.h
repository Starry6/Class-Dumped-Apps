@interface CXTransaction : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSMutableOrderedSet mutableActions;
@property (nonatomic) BOOL complete;
@property (nonatomic) NSArray actions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAction:;
- (BOOL)isComplete;
- (void)addAction:;
- (id)init;
- (void)setUUID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)actions;
- (id)sanitizedCopy;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
- (id)copyWithZone:;
- (id)initWithActions:;
- (id)sanitizedCopyWithZone:;
- (void)updateSanitizedCopy:withZone:;
- (void)updateCopy:withZone:;
- (id)mutableActions;
- (void)addActionsFromTransaction:;
- (id)allowedClassesForMutableActions;
- (void)setMutableActions:;
+ (BOOL)supportsSecureCoding;
@end
