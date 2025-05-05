@interface CLPInstSchemaHabitualUsageByCalendarWeekInformation : SISchemaInstrumentationMessage
@property (nonatomic) I calendarWeekNumber;
@property (nonatomic) BOOL hasCalendarWeekNumber;
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setWasHabitualUserDuringCalendarWeek:;
- (BOOL)hasWasHabitualUserDuringCalendarWeek;
- (void)setHasWasHabitualUserDuringCalendarWeek:;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (BOOL)wasHabitualUserDuringCalendarWeek;
- (void)setCalendarWeekNumber:;
- (BOOL)hasCalendarWeekNumber;
- (void)setHasCalendarWeekNumber:;
- (void)deleteCalendarWeekNumber;
- (unsigned int)calendarWeekNumber;
@end
