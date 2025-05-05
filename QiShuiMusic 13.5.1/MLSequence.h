@interface MLSequence : NSObject
@property (nonatomic) NSArray featureValues;
@property (nonatomic) NSArray values;
@property (nonatomic) q type;
@property (nonatomic) NSArray stringValues;
@property (nonatomic) NSArray int64Values;
- (id)values;
- (id)initWithCoder:;
- (id)featureValues;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)stringValues;
- (id)initWithArray:type:;
- (id)int64Values;
+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithStringArray:;
+ (id)emptySequenceWithType:;
+ (id)sequenceFromArray:error:;
+ (id)sequenceWithInt64Array:;
@end
