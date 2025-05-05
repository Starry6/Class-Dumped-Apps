@interface SKFrameCaptureDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)archiver:willEncodeObject:;
- (void)archiver:didEncodeObject:;
+ (id)sharedInstance;
@end
