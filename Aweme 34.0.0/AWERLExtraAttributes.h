@interface AWERLExtraAttributes : NSObject
@property (nonatomic) NSDictionary stateTitleDictionary;
@property (nonatomic) NSDictionary stateTitleColorDictionary;
@property (nonatomic) NSDictionary stateImageDictionary;
@property (nonatomic) NSDictionary eventActionDictionary;
- (id)stateTitleDictionary;
- (void)setStateTitleDictionary:;
- (id)stateTitleColorDictionary;
- (void)setStateTitleColorDictionary:;
- (id)stateImageDictionary;
- (void)setStateImageDictionary:;
- (id)eventActionDictionary;
- (void)setEventActionDictionary:;
- (void)syncAttributesToButton:stateTitleDictionary:stateTitleColorDictionary:stateImageDictionary:eventActionDictionary:;
- (void).cxx_destruct;
+ (id)extraAttributesFromButton:;
@end
