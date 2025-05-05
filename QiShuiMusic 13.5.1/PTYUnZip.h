@interface PTYUnZip : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)unzipFileAtPath:toDestination:withError:;
+ (void)setup:;
@end
