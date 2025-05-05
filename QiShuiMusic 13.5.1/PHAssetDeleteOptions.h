@interface PHAssetDeleteOptions : NSObject
@property (nonatomic) BOOL shouldExpungeFromLocalStorageOnly;
- (id)initWithXPCDict:;
- (id)init;
- (id)copyWithZone:;
- (void)encodeToXPCDict:;
- (BOOL)shouldExpungeFromLocalStorageOnly;
- (void)setShouldExpungeFromLocalStorageOnly:;
@end
