@interface AVAssetTrackSegment : NSObject
@property (nonatomic) {?={?={?=qiIq}{?=qiIq}}{?={?=qiIq}{?=qiIq}}} timeMapping;
@property (nonatomic) BOOL empty;
- (id)init;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithTimeMapping:;
- (id)timeMapping;
+ (BOOL)supportsSecureCoding;
@end
