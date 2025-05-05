@interface RPStatusDevice : NSObject
@property (nonatomic) RPCompanionLinkDevice device;
@property (nonatomic) NSMutableDictionary statusInfoMap;
@property (nonatomic) NSMutableDictionary statusStateMap;
- (id)getIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (id)device;
- (id)statusInfoMap;
- (void)setStatusInfoMap:;
- (id)statusStateMap;
- (void)setStatusStateMap:;
+ (BOOL)supportsSecureCoding;
@end
