@interface SAWebVideoResult : SAWebImageResult
@property (nonatomic) NSNumber runTimeInMilliseconds;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)runTimeInMilliseconds;
- (void)setRunTimeInMilliseconds:;
+ (id)videoResult;
+ (id)videoResultWithDictionary:context:;
@end
