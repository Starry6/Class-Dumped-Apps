@interface ARQLInlineTouch : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) {CGPoint=dd} cgLocation;
@property (nonatomic) {CGPoint=dd} cgPreviousLocation;
@property (nonatomic) q phase;
@property (nonatomic) NSString uid;
- (long long)phase;
- (void)setPhase:;
- (id)uid;
- (void)setUid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (id)initWithUITouch:;
- (id)cgLocation;
- (void)setCgLocation:;
- (id)cgPreviousLocation;
- (void)setCgPreviousLocation:;
- (id)uuidForTouch:;
+ (BOOL)supportsSecureCoding;
+ (void)removeUIDForUITouch:;
+ (id)touchToUUIDMapping;
@end
