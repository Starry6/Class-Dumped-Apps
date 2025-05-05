@interface TRILevel : TRIPBMessage
@property (nonatomic) NSInteger levelOneOfCase;
@property (nonatomic) BOOL booleanValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSInteger intValue;
@property (nonatomic) q longValue;
@property (nonatomic) float floatValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) NSData binaryValue;
@property (nonatomic) TRIFile fileValue;
@property (nonatomic) TRIFile directoryValue;
@property (nonatomic) TRIMobileAssetReference mobileAssetReferenceValue;
@property (nonatomic) NSMutableDictionary metadata;
@property (nonatomic) Q metadata_Count;
- (id)object;
- (id)fileOrDirectoryLevelWithIsDir:;
+ (id)descriptor;
@end
