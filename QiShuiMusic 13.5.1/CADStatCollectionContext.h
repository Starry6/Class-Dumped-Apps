@interface CADStatCollectionContext : NSObject
@property (nonatomic) ^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{os_unfair_lock_s=I}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFURL}^{__CFString}^{__CFString}Qiii@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}@BB^{__CFSet}@@@i@@@*IIiBBBBBB} database;
@property (nonatomic) ACAccountStore accountStore;
- (id)accountStore;
- (void)dealloc;
- (void)setDatabase:;
- (void).cxx_destruct;
- (id)database;
- (id)initWithDatabase:accountStore:;
@end
