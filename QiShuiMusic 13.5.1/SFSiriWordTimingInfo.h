@interface SFSiriWordTimingInfo : NSObject
@property (nonatomic) NSString localizedText;
@property (nonatomic) double timeOffset;
@property (nonatomic) {_NSRange=QQ} textRange;
@property (nonatomic) NSString wordID;
- (id)dictionary;
- (id)initWithDictionary:;
- (double)timeOffset;
- (void)setTimeOffset:;
- (id)textRange;
- (void).cxx_destruct;
- (id)localizedText;
- (void)setLocalizedText:;
- (id)wordID;
- (void)setWordID:;
- (void)setTextRange:;
+ (id)serializableArrayWithTimingInfoArray:;
+ (id)timingInfoArrayWithSerializableArray:;
@end
