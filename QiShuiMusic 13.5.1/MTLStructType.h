@interface MTLStructType : MTLType
@property (nonatomic) NSArray members;
- (id)memberByName:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
