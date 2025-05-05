@interface SKCaptureUnarchiverDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)unarchiver:cannotDecodeObjectOfClassName:originalClasses:;
+ (id)sharedInstance;
@end
