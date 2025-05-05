@interface BUADServiceZip : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adServiceVersion;
- (id)cloneInstance:;
- (void)unzipFileAtPath:toDestination:callback:;
- (BOOL)unzipFileAtPath:toDestination:error:;
- (void)unzipFileAtPath:toDestination:overwrite:needRename:password:callback:;
- (BOOL)unzipFileAtPath:toDestination:overwrite:needRename:password:error:;
@end
