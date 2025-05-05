@interface UgenEvent : NSObject
@property (nonatomic) Q type;
@property (nonatomic) UgenWidget widget;
@property (nonatomic) NSDictionary eventInfo;
@property (nonatomic) NSDictionary eventDic;
@property (nonatomic) NSDictionary dataInfo;
- (id)dataInfo;
- (id)eventDic;
- (void)setDataInfo:;
- (void)setEventDic:;
- (void)setWidget:;
- (id)widget;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)eventInfo;
- (void)setEventInfo:;
@end
