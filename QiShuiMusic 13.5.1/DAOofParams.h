@interface DAOofParams : NSObject
@property (nonatomic) NSInteger oofState;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) NSString message;
@property (nonatomic) NSInteger externalState;
@property (nonatomic) NSString externalMessage;
- (void)setMessage:;
- (void)setStartTime:;
- (id)initWithDictionary:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEnabled;
- (id)dictionaryRepresentationForASSettingTask;
- (void)enableOof:From:to:withMessage:;
- (int)oofState;
- (void)setOofState:;
- (int)externalState;
- (void)setExternalState:;
- (id)externalMessage;
- (void)setExternalMessage:;
@end
