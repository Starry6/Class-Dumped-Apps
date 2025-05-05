@interface YYTextUnarchiver : NSKeyedUnarchiver
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)unarchiver:didDecodeObject:;
- (id)initForReadingWithData:;
+ (id)unarchiveObjectWithData:;
+ (id)unarchiveObjectWithFile:;
@end
