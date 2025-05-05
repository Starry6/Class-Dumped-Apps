@interface IESDPBParseConfig : NSObject
@property (nonatomic) NSString channel;
@property (nonatomic) NSString dataMessage;
@property (nonatomic) NSString dataShrink;
@property (nonatomic) NSString extraMessage;
@property (nonatomic) NSString extraShrink;
@property (nonatomic) BOOL shouldCompleteIDLField;
@property (nonatomic) BOOL numberToString;
- (id)initWithExtras:;
- (void)setDataMessage:;
- (void)setExtraShrink:;
- (id)dataMessage;
- (id)dataShrink;
- (id)extraMessage;
- (id)extraShrink;
- (BOOL)numberToString;
- (void)setDataShrink:;
- (void)setExtraMessage:;
- (void)setNumberToString:;
- (void)setShouldCompleteIDLField:;
- (BOOL)shouldCompleteIDLField;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
@end
