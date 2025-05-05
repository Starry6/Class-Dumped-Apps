@interface WTFWebFileManagerDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)fileManager:shouldProceedAfterError:movingItemAtURL:toURL:;
@end
