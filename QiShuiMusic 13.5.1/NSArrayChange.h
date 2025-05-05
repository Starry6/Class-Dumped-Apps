@interface NSArrayChange : NSObject
@property (nonatomic) Q changeType;
@property (nonatomic) Q sourceIndex;
@property (nonatomic) Q destinationIndex;
@property (nonatomic) @ value;
- (unsigned long long)changeType;
- (id)value;
- (id)initWithType:sourceIndex:destinationIndex:value:;
- (unsigned long long)sourceIndex;
- (unsigned long long)destinationIndex;
+ (id)allocWithZone:;
@end
