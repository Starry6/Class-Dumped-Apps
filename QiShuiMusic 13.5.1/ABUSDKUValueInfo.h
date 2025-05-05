@interface ABUSDKUValueInfo : NSObject
@property (nonatomic) q ritType;
@property (nonatomic) NSString labelName;
@property (nonatomic) NSString labelTimestamp;
@property (nonatomic) q labelId;
@property (nonatomic) NSString labelVersion;
@property (nonatomic) double labelUpperBound;
@property (nonatomic) double labelLowerBound;
- (double)labelLowerBound;
- (double)labelUpperBound;
- (id)parseLabelToDic;
- (long long)ritType;
- (id)initWithRitTypeStr:andDict:;
- (id)labelTimestamp;
- (id)labelVersion;
- (void).cxx_destruct;
- (long long)labelId;
- (id)labelName;
@end
