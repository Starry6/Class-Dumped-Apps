@interface CSIntentsWrapper : NSObject
@property (nonatomic) # INInteractionClass;
- (Class)INInteractionClass;
+ (id)sharedInstance;
@end
