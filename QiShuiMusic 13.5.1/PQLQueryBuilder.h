@interface PQLQueryBuilder : NSObject
@property (nonatomic) NSError lastError;
- (id)init;
- (void).cxx_destruct;
- (void)setLastError:;
- (id)lastError;
- (id)bindParameter:spec:;
- (id)bindStringParameter:;
- (id)bindDoubleParameter:;
- (id)bindBooleanParameter:;
- (id)bindCharParameter:;
- (id)bindUnsignedCharParameter:;
- (id)bindShortParameter:;
- (id)bindUnsignedShortParameter:;
- (id)bindIntegerParameter:;
- (id)bindUnsignedIntegerParameter:;
- (id)bindLongParameter:;
- (id)bindUnsignedLongParameter:;
- (id)bindObjectParameter:;
@end
