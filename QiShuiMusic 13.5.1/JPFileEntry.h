@interface JPFileEntry : NSObject
@property (nonatomic) ^v backing;
@property (nonatomic) BOOL releaseBackingOnDealloc;
@property (nonatomic) NSString pathname;
- (id)backing;
- (id)pathname;
- (BOOL)releaseBackingOnDealloc;
- (id)initWithBacking:releaseOnDealloc:;
- (void)setBacking:;
- (BOOL)writeStream:toDirectory:error:;
@end
