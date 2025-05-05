@interface SAMicrostackshotStatistics : NSObject
@property (nonatomic) SAMSTypeStats total;
@property (nonatomic) SAMSTypeStats interrupt;
@property (nonatomic) SAMSTypeStats timer;
@property (nonatomic) SAMSTypeStats io;
@property (nonatomic) SAMSTypeStats pmi;
@property (nonatomic) SAMSTypeStats macf;
@property (nonatomic) SAMSTypeStats unknown_type;
@property (nonatomic) Q bytes_not_microstackshots;
@property (nonatomic) Q num_microstackshots_filtered_out;
@property (nonatomic) Q bytes_microstackshots_filtered_out;
- (id)init;
- (id)interrupt;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)timer;
- (id)total;
- (id)io;
- (id)pmi;
- (id)macf;
- (id)unknown_type;
- (unsigned long long)bytes_not_microstackshots;
- (void)setBytes_not_microstackshots:;
- (unsigned long long)num_microstackshots_filtered_out;
- (void)setNum_microstackshots_filtered_out:;
- (unsigned long long)bytes_microstackshots_filtered_out;
- (void)setBytes_microstackshots_filtered_out:;
@end
