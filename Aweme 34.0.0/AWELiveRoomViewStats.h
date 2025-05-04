@interface AWELiveRoomViewStats : AWEBaseApiModel
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL incremental;
@property (nonatomic) q displayVersion;
@property (nonatomic) q displayValue;
@property (nonatomic) q displayType;
@property (nonatomic) NSString displayMiddle;
@property (nonatomic) NSString displayLong;
@property (nonatomic) BOOL isFromMessage;
- (id)displayLong;
- (BOOL)isFromMessage;
- (void)setIsFromMessage:;
- (id)displayMiddle;
- (void)setDisplayMiddle:;
- (void)setDisplayLong:;
- (void)setIsHidden:;
- (long long)displayType;
- (void)setDisplayType:;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (long long)displayValue;
- (void)setDisplayValue:;
- (long long)displayVersion;
- (void)setIncremental:;
- (BOOL)incremental;
- (void)setDisplayVersion:;
+ (id)JSONKeyPathsByPropertyKey;
@end
