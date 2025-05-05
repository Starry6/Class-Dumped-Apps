@interface WKSecureCodingArchivingDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)unarchiver:didDecodeObject:;
- (id)archiver:willEncodeObject:;
@end
